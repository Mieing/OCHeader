@class NSString;

@interface WCFinderSetWarningWordingResult : NSObject

@property (nonatomic) unsigned long long warnFlag;
@property (copy, nonatomic) NSString *warningWording;
@property (copy, nonatomic) NSString *selectWording;
@property (nonatomic) unsigned long long tagType;
@property (copy, nonatomic) NSString *tagSecKey;
@property (nonatomic) BOOL postDirectly;

- (void).cxx_destruct;

@end
