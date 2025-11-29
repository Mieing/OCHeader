@class NSMutableArray;

@interface CMMarkdownTableInfo : NSObject

@property (retain, nonatomic) NSMutableArray *rows;

- (void)changeAttributedStr:(id)a0 withChangeBold:(BOOL)a1 fontSize:(id)a2;
- (id)attributedStrArraysWithFontSize:(id)a0;
- (void)addRowInfo:(id)a0;
- (id)originAttributedStr;
- (void)toBoldAttributedStr:(id)a0;
- (id)attributedStrArrays;
- (id)allRows;
- (void).cxx_destruct;

@end
