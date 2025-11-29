@class NSString;

@interface MAVEffectTextInfo : NSObject

@property (retain, nonatomic) NSString *text;
@property (nonatomic) float fontSize;
@property (retain, nonatomic) NSString *fontFamily;
@property (nonatomic) BOOL italic;
@property (nonatomic) BOOL bold;

- (id)initWithText:(id)a0;
- (id)initWithText:(id)a0 fontSize:(float)a1 fontFamily:(id)a2 italic:(BOOL)a3 bold:(BOOL)a4;
- (void).cxx_destruct;

@end
