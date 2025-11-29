@class YYLabel, NSAttributedString;

@interface AWEOfficialContentLabel : YYLabel

@property (retain, nonatomic) NSAttributedString *foldTruncationToken;
@property (retain, nonatomic) YYLabel *hightToken;
@property (copy, nonatomic) id /* block */ unFoldActionBlock;

- (void)setNeedFoldLines:(long long)a0;
- (void)setNeedUnfold;
- (void).cxx_destruct;
- (id)init;

@end
