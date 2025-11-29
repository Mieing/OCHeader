@class NSNumber;
@protocol ACCEditServiceProtocol;

@interface ACCEditPlayerViewModel : ACCEditViewModel

@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) NSNumber *shouldPlay;

- (void).cxx_destruct;
- (void)dealloc;

@end
