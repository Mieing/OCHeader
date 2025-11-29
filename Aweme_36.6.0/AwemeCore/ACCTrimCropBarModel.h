@class ACCTrimCropBarItem, ACCTrimCropEditorSubViewController;
@protocol ACCTrimCropBarProtocol;

@interface ACCTrimCropBarModel : NSObject

@property (retain, nonatomic) id<ACCTrimCropBarProtocol> bar;
@property (readonly, nonatomic) ACCTrimCropBarItem *barItem;
@property (readonly, nonatomic) BOOL hasSubViewController;
@property (readonly, nonatomic) ACCTrimCropEditorSubViewController *subViewController;

- (id)initWithTrimCropBar:(id)a0;
- (void).cxx_destruct;

@end
