@class NSString;

@interface MMAnimatedImageDecodeConfig : NSObject

@property (nonatomic) BOOL isSupportAPNG;
@property (retain, nonatomic) NSString *cpKey;
@property (nonatomic) unsigned int maxWidth;
@property (nonatomic) BOOL shouldShowWxamMark;

+ (id)defaultConfigWithMaxWidthLimit;
+ (id)defaultConfigWithoutMaxWidthLimit;
+ (void)updateMaxWidth:(unsigned int)a0;

- (id)init;
- (void)ignoreMaxWidthLimit;
- (void).cxx_destruct;

@end
