@class NSString;

@interface GameVideoItem : NSObject

@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) int educationType;
@property (nonatomic) BOOL inActionSheet;
@property (copy, nonatomic) id /* block */ tapCallback;
@property (retain, nonatomic) NSString *educationTitleOnce;
@property (retain, nonatomic) NSString *educationDescOnce;
@property (retain, nonatomic) NSString *educationTitleEveryTime;
@property (retain, nonatomic) NSString *educationDescEveryTime;
@property (nonatomic) unsigned int educationReportExtType;
@property (nonatomic) unsigned int educationReportExtPosition;

- (id)initWithScene:(unsigned int)a0;
- (void).cxx_destruct;

@end
