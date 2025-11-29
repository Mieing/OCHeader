@interface DiffMatchPc : NSObject {
    unsigned long long Match_MaxBits;
}

@property (nonatomic) double Diff_Timeout;
@property (nonatomic) unsigned long long Diff_EditCost;
@property (nonatomic) double Match_Threshold;
@property (nonatomic) long long Match_Distance;
@property (nonatomic) float pc_DeleteThreshold;
@property (nonatomic) unsigned short pc_Margin;

- (id)pc_fromText:(id)a0 error:(id *)a1;
- (id)pc_apply:(id)a0 toString:(id)a1;
- (id)diff_mainOfOldString:(id)a0 andNewString:(id)a1 checkLines:(BOOL)a2;
- (id)diff_mainOfOldString:(id)a0 andNewString:(id)a1 checkLines:(BOOL)a2 deadline:(double)a3;
- (id)diff_computeFromOldString:(id)a0 andNewString:(id)a1 checkLines:(BOOL)a2 deadline:(double)a3;
- (void)diff_cleanupMerge:(id)a0;
- (id)diff_lineModeFromOldString:(id)a0 andNewString:(id)a1 deadline:(double)a2;
- (id)diff_bisectOfOldString:(id)a0 andNewString:(id)a1 deadline:(double)a2;
- (id)diff_linesToCharsForFirstString:(id)a0 andSecondString:(id)a1;
- (void)diff_chars:(id)a0 toLines:(id)a1;
- (void)diff_cleanupSemantic:(id)a0;
- (id)diff_bisectSplitOfOldString:(id)a0 andNewString:(id)a1 x:(unsigned long long)a2 y:(unsigned long long)a3 deadline:(double)a4;
- (void)diff_cleanupSemanticLossless:(id)a0;
- (unsigned long long)match_bitapOfText:(id)a0 andPattern:(id)a1 near:(unsigned long long)a2;
- (id)match_alphabet:(id)a0;
- (double)match_bitapScoreForErrorCount:(unsigned long long)a0 location:(unsigned long long)a1 near:(unsigned long long)a2 pattern:(id)a3;
- (void)diff_cleanupEfficiency:(id)a0;
- (id)pc_makeFromOldString:(id)a0 andDiffs:(id)a1;
- (id)diff_text1:(id)a0;
- (void)pc_addContextToPc:(id)a0 sourceText:(id)a1;
- (id)pc_deepCopy:(id)a0;
- (id)pc_addPadding:(id)a0;
- (void)pc_splitMax:(id)a0;
- (unsigned long long)match_mainForText:(id)a0 pattern:(id)a1 near:(unsigned long long)a2;
- (id)diff_text2:(id)a0;
- (unsigned long long)diff_levenshtein:(id)a0;
- (unsigned long long)diff_xIndexIn:(id)a0 location:(unsigned long long)a1;
- (id)diff_mainOfOldString:(id)a0 andNewString:(id)a1;
- (unsigned long long)diff_commonPrefixOfFirstString:(id)a0 andSecondString:(id)a1;
- (unsigned long long)diff_commonSuffixOfFirstString:(id)a0 andSecondString:(id)a1;
- (unsigned long long)diff_commonOverlapOfFirstString:(id)a0 andSecondString:(id)a1;
- (id)diff_halfMatchOfFirstString:(id)a0 andSecondString:(id)a1;
- (id)diff_halfMatchIOfLongString:(id)a0 andShortString:(id)a1 index:(long long)a2;
- (long long)diff_cleanupSemanticScoreOfFirstString:(id)a0 andSecondString:(id)a1;
- (id)diff_prettyHtml:(id)a0;
- (id)diff_toDelta:(id)a0;
- (id)diff_fromDeltaWithText:(id)a0 andDelta:(id)a1 error:(id *)a2;
- (id)pc_makeFromOldString:(id)a0 andNewString:(id)a1;
- (id)pc_makeFromDiffs:(id)a0;
- (id)pc_makeFromOldString:(id)a0 newString:(id)a1 diffs:(id)a2;
- (id)pc_toText:(id)a0;
- (id)init;
- (void)dealloc;

@end
