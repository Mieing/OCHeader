@class NSString, NSArray;

@interface AWEIMTipsBelowMessageModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *tips;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) NSArray *visibleUIDs;
@property (retain, nonatomic) NSArray *inVisibleUIDs;

+ (id)generateModelForMessage:(id)a0 scene:(id)a1;
+ (BOOL)canShowTips:(id)a0 scene:(id)a1;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
