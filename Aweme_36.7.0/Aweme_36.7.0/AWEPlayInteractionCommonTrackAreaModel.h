@class NSString;

@interface AWEPlayInteractionCommonTrackAreaModel : NSObject

@property (retain, nonatomic) NSString *identification;
@property (nonatomic) int width;
@property (nonatomic) int height;

+ (id)commonTrackAreaModelWithIdentification:(id)a0 Width:(double)a1 height:(double)a2;

- (void)updateWidth:(double)a0 height:(double)a1;
- (void).cxx_destruct;

@end
