@class NSString, NSArray, AWEVideoPublishViewModel;

@interface AWETextStickerResourceFlowParams : NSObject

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) NSString *textStickerId;
@property (copy, nonatomic) NSArray *fontEffectIds;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;

@end
