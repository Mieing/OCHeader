@class NSString, AWEAwemeModel;

@interface AWEDynamicCardInsertResult : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long expectedInsertPos;
@property (nonatomic) long long realInsertPos;
@property (copy, nonatomic) NSString *failReason;
@property (nonatomic) BOOL success;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
