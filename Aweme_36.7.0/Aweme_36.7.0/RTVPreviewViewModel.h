@class NSString;

@interface RTVPreviewViewModel : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long style;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)updateStyle:(unsigned long long)a0;

@end
