@class NSArray, TSKMidiParam, NSString, TSKModelParam, TSKMultiParam;

@interface TSKScorerConfig : NSObject

@property (nonatomic) BOOL seekAsync;
@property (nonatomic) BOOL enablePitch;
@property (retain, nonatomic) TSKMidiParam *midiParam;
@property (retain, nonatomic) TSKMultiParam *multiParam;
@property (retain, nonatomic) NSArray *sectionInfoArr;
@property (retain, nonatomic) NSString *roleName;
@property (retain, nonatomic) TSKModelParam *modelParam;

- (id)init;
- (void).cxx_destruct;

@end
