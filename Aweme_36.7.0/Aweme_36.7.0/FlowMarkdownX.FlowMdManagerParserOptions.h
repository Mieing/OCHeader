@interface FlowMarkdownX.FlowMdManagerParserOptions : NSObject {
    void /* unknown type, empty encoding */ reusePoolSizeConfig;
}

@property (nonatomic, readonly) BOOL disableLatexPairRule;
@property (nonatomic, readonly) BOOL disableLatexDollarRule;
@property (nonatomic, readonly) BOOL fixLastTextStrongAndCode;
@property (nonatomic, readonly) BOOL fixLastTextFormula;
@property (nonatomic, readonly) BOOL calcWithCache;
@property (nonatomic, readonly) BOOL enableClickTimeStamp;
@property (nonatomic, readonly) BOOL enableTextCopy;
@property (nonatomic, readonly) BOOL enableTableAndCodeFullscreen;
@property (nonatomic, readonly) BOOL enableHtmlInlineFeature;
@property (nonatomic, readonly) BOOL enableFormulaTrunc;
@property (nonatomic, readonly) BOOL enableFormulaPerformanceOpt;
@property (nonatomic) BOOL enableTableKeepAttributeOpt;
@property (nonatomic, readonly) BOOL calcTextHeightWithLayoutManager;
@property (nonatomic, readonly) BOOL textViewDrawSelectUseContextRender;
@property (nonatomic, readonly) BOOL enableTextviewIncrementalRender;
@property (nonatomic, readonly) double mdMeasureSamplingRate;
@property (nonatomic, readonly) BOOL enableAttrStrIncrementalFormat;
@property (nonatomic, readonly) long long mdAttrStrFormatCacheSize;
@property (nonatomic, readonly) BOOL enableCmarkArenaAutoRelease;
@property (nonatomic, readonly) double cmarkArenaAutoReleaseThreshold;
@property (nonatomic, readonly) BOOL enableAutolinkFilterChinese;
@property (nonatomic, readonly) BOOL fixMarkdownReviser;

- (id)init;

@end
