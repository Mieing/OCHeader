@class NSNumber;

@interface IESLiveSEISyncIndexInfo : NSObject

@property (retain, nonatomic) NSNumber *value;
@property (nonatomic) double receiveTS;

- (BOOL)updateIfNeededWithValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;

@end
