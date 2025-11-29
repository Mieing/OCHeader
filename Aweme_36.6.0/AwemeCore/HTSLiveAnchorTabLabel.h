@class DSLDetail, NSString, NSMutableDictionary, HTSLiveImage;

@interface HTSLiveAnchorTabLabel : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) HTSLiveImage *label;
@property (nonatomic) BOOL hasLabel;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) int style;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *accessibleContent;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (readonly, nonatomic) unsigned long long trackParams_Count;
@property (retain, nonatomic) DSLDetail *dslLabel;
@property (nonatomic) BOOL hasDslLabel;

+ (id)descriptor;

@end
