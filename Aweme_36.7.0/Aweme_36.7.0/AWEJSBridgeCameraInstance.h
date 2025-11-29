@class NSArray, NSError, NSNumber, BDXBridgeStudioComposerExportMethodParamModel;
@protocol AWEStudioComposerCreation;

@interface AWEJSBridgeCameraInstance : NSObject

@property (retain, nonatomic) BDXBridgeStudioComposerExportMethodParamModel *inputModel;
@property (retain, nonatomic) id<AWEStudioComposerCreation> creation;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSNumber *useOriginAssetFlag;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)callback;
- (void)dealloc;

@end
