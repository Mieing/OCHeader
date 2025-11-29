@class AWECommentInputLynxViewTrackParams, AWECommentInputLynxViewInputConfig, NSDictionary, NSString, NSNumber, AWECommentInputLynxViewCommentGroupData;

@interface AWECommentInputLynxViewMethodParamModel : AWEBaseBizConfigModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *serviceID;
@property (retain, nonatomic) NSNumber *bizPublish;
@property (retain, nonatomic) AWECommentInputLynxViewCommentGroupData *commentGroupData;
@property (retain, nonatomic) AWECommentInputLynxViewTrackParams *trackParams;
@property (copy, nonatomic) NSDictionary *businessParams;
@property (copy, nonatomic) NSDictionary *defaultCommentModel;
@property (retain, nonatomic) AWECommentInputLynxViewInputConfig *inputConfig;
@property (copy, nonatomic) NSDictionary *replyComment;
@property (nonatomic) long long generalCommentScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredKeyPaths;
+ (id)commentGroupDataJSONTransformer;
+ (id)trackParamsJSONTransformer;
+ (id)inputConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
