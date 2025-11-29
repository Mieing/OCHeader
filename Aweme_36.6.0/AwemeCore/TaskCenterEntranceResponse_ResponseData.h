@class NSString, HTSLiveImage, NSMutableArray;

@interface TaskCenterEntranceResponse_ResponseData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) NSMutableArray *itemsArray;
@property (readonly, nonatomic) unsigned long long itemsArray_Count;
@property (copy, nonatomic) NSString *URL;
@property (retain, nonatomic) NSMutableArray *alienRulesArray;
@property (readonly, nonatomic) unsigned long long alienRulesArray_Count;

+ (id)descriptor;

@end
