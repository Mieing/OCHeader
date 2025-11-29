@class NSString;

@interface PasskeyGuideCreateConfig : NSObject

@property (copy, nonatomic) id /* block */ onGoToCreateBlock;
@property (copy, nonatomic) id /* block */ onGoToCancelBlock;
@property (copy, nonatomic) id /* block */ onLearnMoreBlock;
@property (copy, nonatomic) id /* block */ onPageSheetDidClose;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;

- (void).cxx_destruct;

@end
