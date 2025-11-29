@class NSString;

@interface RegexRule : NSObject

@property (copy, nonatomic) NSString *pattern;
@property (nonatomic) unsigned short leftIdentifier;
@property (nonatomic) unsigned short rightIdentifier;

- (id)initWithPattern:(id)a0 leftIdentifier:(unsigned short)a1 rightIdentifier:(unsigned short)a2;
- (void).cxx_destruct;

@end
