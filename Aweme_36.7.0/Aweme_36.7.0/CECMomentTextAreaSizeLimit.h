@protocol CECMomentTextAreaFontRule;

@interface CECMomentTextAreaSizeLimit : NSObject

@property (nonatomic) double minWidth;
@property (nonatomic) double maxWidth;
@property (nonatomic) unsigned long long minNumberOfLines;
@property (nonatomic) unsigned long long maxNumberOfLines;
@property (retain, nonatomic) id<CECMomentTextAreaFontRule> fontRule;

- (void).cxx_destruct;
- (id)init;

@end
