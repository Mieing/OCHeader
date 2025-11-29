@class NSNumber, HTSLiveAssetStruct, NSError;

@interface IESLiveChatChannelAnimationItem : NSObject

@property (retain, nonatomic) NSNumber *effectID;
@property (retain, nonatomic) HTSLiveAssetStruct *effectModel;
@property (retain, nonatomic) NSError *error;

- (id)initWithAssetMessage:(id)a0;
- (void).cxx_destruct;

@end
