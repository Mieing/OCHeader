@class NSArray;

@interface AWEIMShareSendDataSource : NSObject

@property (nonatomic) unsigned long long sourceType;
@property (copy, nonatomic) NSArray *sourceMessages;
@property (nonatomic) BOOL mergeForward;
@property (copy, nonatomic) id /* block */ customSendImpl;

- (id)initWithCustomSendImpl:(id /* block */)a0;
- (id)initWithTarget:(id)a0 targetType:(long long)a1;
- (id)initWithSourceMessages:(id)a0 mergeForward:(BOOL)a1;
- (void).cxx_destruct;

@end
