@class NSString, FlowIMImageModelDataModel;

@interface FlowIMCreatorInfo : NSObject {
    void /* function */ creatorHandle;
    void /* function */ creatorId;
}

@property (nonatomic, copy) NSString *creatorHandle;
@property (nonatomic, copy) NSString *creatorId;
@property (nonatomic, retain) FlowIMImageModelDataModel *creatorAvatar;

- (void).cxx_destruct;
- (id)init;

@end
