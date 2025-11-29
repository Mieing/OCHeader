@class AWEFeedPlayableButtonInfoModel, NSString, AWEFeedPlayableAdTagModel, AWEFeedPlayableIconModel;

@interface AWEFeedPlayableTransformBarModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) AWEFeedPlayableIconModel *icon;
@property (retain, nonatomic) AWEFeedPlayableAdTagModel *adTag;
@property (retain, nonatomic) AWEFeedPlayableButtonInfoModel *buttonInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
