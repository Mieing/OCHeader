@class BDReaderChapterInfo;

@interface BDLayoutPageData : NSObject

@property (nonatomic) unsigned long long layoutEngine;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic) unsigned long long pageCount;
@property (retain, nonatomic) BDReaderChapterInfo *chapterInfo;
@property (readonly, nonatomic) BOOL showProgress;

- (BOOL)isEqualToPageData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
