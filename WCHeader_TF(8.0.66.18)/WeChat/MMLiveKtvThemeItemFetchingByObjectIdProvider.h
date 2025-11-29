@class NSString;

@interface MMLiveKtvThemeItemFetchingByObjectIdProvider : NSObject <MMLiveKtvThemeItemFetching>

@property (nonatomic) unsigned long long objectId;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *anchorFinderUsername;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObjectId:(unsigned long long)a0 liveId:(unsigned long long)a1 anchorFinderUsername:(id)a2;
- (void)fetchThemeItemsWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
