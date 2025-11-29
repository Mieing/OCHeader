@class NSString;
@protocol AWEIMShareModelProtocol;

@interface AWEIMFetchShareCandidateFrequentShareGroup : NSObject <AWEIMFetchShareCandidate>

@property (retain, nonatomic) id<AWEIMShareModelProtocol> shareModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithShareModel:(id)a0;
+ (id)candidatesWithDataSource:(id)a0;
+ (id)insertType;

- (BOOL)canInsertToCandidateWithDataSource:(id)a0;
- (void).cxx_destruct;

@end
