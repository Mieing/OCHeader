@class NSString;

@interface BTRecoFlowFuncSectionData : BTRecoFlowSectionData

@property (nonatomic) unsigned long long funcType;
@property (retain, nonatomic) NSString *flowHeaderTitle;
@property (retain, nonatomic) NSString *hintTitle;

- (id)initWithFuncSectionType:(unsigned long long)a0;
- (long long)numberOfRowsInSection;
- (double)heightForSectionFooter;
- (id)identifierWithRow:(unsigned long long)a0;
- (void).cxx_destruct;

@end
