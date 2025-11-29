@protocol IESIMStorageProtocol;

@interface AWEIMLocalGIFDataManager : NSObject

@property (retain, nonatomic) id<IESIMStorageProtocol> gifStore;

- (void)fetchRemoteData;
- (id)getKeywordIDForText:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
