@class AWESearchScanDataContext, NSString, NSDictionary;

@interface AWELivePictureSearcher : NSObject <IESLivePictureSearcher>

@property (retain, nonatomic) AWESearchScanDataContext *searchDataContext;
@property (copy, nonatomic) NSString *pageType;
@property (nonatomic) BOOL showBG;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *searchFrom;
@property (copy, nonatomic) NSString *searchFromSecond;
@property (nonatomic) BOOL showSelector;
@property (copy, nonatomic) NSDictionary *logExtraDic;
@property (copy, nonatomic) NSString *federationInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)jumpToScanPageWithImage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
