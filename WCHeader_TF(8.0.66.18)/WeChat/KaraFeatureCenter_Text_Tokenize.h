@class NSString, NSArray;

@interface KaraFeatureCenter_Text_Tokenize : NSObject

@property (nonatomic, readonly) NSString *description;
@property (retain, nonatomic) NSArray *tokenTypeIds;
@property (retain, nonatomic) NSArray *attentionMask;

- (id)initWithTokenTypeIds:(id)a0 attentionMask:(id)a1;
- (void).cxx_destruct;

@end
