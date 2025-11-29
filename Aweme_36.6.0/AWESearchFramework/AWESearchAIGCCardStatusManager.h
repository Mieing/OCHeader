@class NSMutableDictionary;
@protocol AWESearchAIGCCardStatusManagerDelegate;

@interface AWESearchAIGCCardStatusManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *AICardStatusDict;
@property (weak, nonatomic) id<AWESearchAIGCCardStatusManagerDelegate> delegate;

- (id)getAICardStatusWithCardID:(id)a0;
- (void)addAICardStatusFromViewModels:(id)a0;
- (id)getAICardStatusListWithSearchID:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
