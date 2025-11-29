@class NSString;

@interface ACCVideoDataClipRangeStorageModel : MTLModel <ACCSerializationProtocol>

@property (nonatomic) double startSeconds;
@property (nonatomic) double durationSeconds;
@property (nonatomic) double attachSeconds;
@property (nonatomic) long long repeatCount;
@property (nonatomic) BOOL isDisable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;

@end
