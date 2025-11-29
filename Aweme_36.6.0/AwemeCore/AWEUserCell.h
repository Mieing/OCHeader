@class NSString;

@interface AWEUserCell : AWEUIListTableViewCell <AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cellType;
+ (double)suggestedHeight;

- (void)configWithModel:(id)a0;
- (id)verificationImage;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;

@end
