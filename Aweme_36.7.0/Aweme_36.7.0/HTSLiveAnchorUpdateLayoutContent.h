@class NSString, NSMutableDictionary;

@interface HTSLiveAnchorUpdateLayoutContent : IESLivePBBaseMessage

@property (nonatomic) int layoutType;
@property (copy, nonatomic) NSString *updateUserId;
@property (nonatomic) int anchorUiLayout;
@property (nonatomic) int anchorLayoutRange;
@property (copy, nonatomic) NSString *operatorId;
@property (retain, nonatomic) NSMutableDictionary *layoutDetails;
@property (readonly, nonatomic) unsigned long long layoutDetails_Count;
@property (nonatomic) BOOL bigAnchorIsOrientation;

+ (id)descriptor;

@end
