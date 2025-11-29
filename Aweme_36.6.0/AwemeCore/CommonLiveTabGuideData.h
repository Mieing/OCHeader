@class NSString, HTSLiveImage, NSMutableArray;

@interface CommonLiveTabGuideData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *mainText;
@property (copy, nonatomic) NSString *subText;
@property (copy, nonatomic) NSString *schemaURL;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSMutableArray *userListArray;
@property (readonly, nonatomic) unsigned long long userListArray_Count;
@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) NSMutableArray *roomListArray;
@property (readonly, nonatomic) unsigned long long roomListArray_Count;
@property (copy, nonatomic) NSString *insertAnchorId;
@property (copy, nonatomic) NSString *insertAnchorOpenId;

+ (id)descriptor;

@end
