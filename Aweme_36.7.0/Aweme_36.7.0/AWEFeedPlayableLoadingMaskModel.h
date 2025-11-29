@class NSString, AWEFeedPlayableIconModel;

@interface AWEFeedPlayableLoadingMaskModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bgColor;
@property (retain, nonatomic) AWEFeedPlayableIconModel *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *capsuleTitle;
@property (copy, nonatomic) NSString *capsuleSubtitle;
@property (copy, nonatomic) NSString *loadingBGM;
@property (copy, nonatomic) NSString *loadingFinishBGM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
