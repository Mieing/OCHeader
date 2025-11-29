@interface AWEDCFeedChunkBasicDataHelper : CSPChunkDataHelper

- (id)customEndTag;
- (id)customSplitTag;
- (unsigned int)customDecodeChunkLengthFromString:(id)a0;
- (BOOL)customRawDataCallbackMode;

@end
