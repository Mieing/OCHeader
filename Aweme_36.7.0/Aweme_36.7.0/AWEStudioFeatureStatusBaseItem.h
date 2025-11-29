@class NSString, AWEStorage;

@interface AWEStudioFeatureStatusBaseItem : NSObject

@property (retain, nonatomic) AWEStorage *storage;
@property (copy, nonatomic) NSString *persistenceKey;

- (id)initWithStorage:(id)a0 persistenceKey:(id)a1;
- (void).cxx_destruct;
- (void)saveStatus:(id)a0;
- (id)readStatus;

@end
