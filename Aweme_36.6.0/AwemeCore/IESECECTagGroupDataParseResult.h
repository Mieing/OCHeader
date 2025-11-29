@class NSArray, NSDictionary;

@interface IESECECTagGroupDataParseResult : NSObject {
    NSArray *_ignoreTagCodes;
    NSArray *_allTagInfos;
    NSArray *_filteredTagDataList;
    NSDictionary *_splitterData;
    double _tagGap;
    double _lineGap;
    double _adaptHeight;
    long long _maxLine;
    BOOL _preciselyLayout;
    NSDictionary *_originalData;
}

+ (unsigned long long)hash;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
