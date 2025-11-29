@class NSMutableArray;

@interface PrivateInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSMutableArray *whitelistUsernames;
@property (retain, nonatomic) NSMutableArray *whitelistLabels;

+ (void)initialize;

- (void)setWhitelistLabels:(id)a0;
- (id)whitelistLabels;
- (void)setWhitelistUsernames:(id)a0;
- (id)whitelistUsernames;
- (void)setVersion:(unsigned long long)a0;
- (unsigned long long)version;

@end
