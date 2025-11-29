@class CMessageWrap;

@interface BTNotifySectionData : BTBaseSectionData

@property (retain, nonatomic) CMessageWrap *latestMsgWrap;
@property (nonatomic) unsigned int notifyCount;
@property (readonly, nonatomic) double sectionHeight;

- (long long)numberOfRowsInSection;
- (double)heightForRowInSection:(unsigned long long)a0;
- (unsigned long long)sectionType;
- (void).cxx_destruct;

@end
