@class NSDecimalNumber, NSString;

@interface ACCStickerTimeRangeModelStorageModel : MTLModel <ACCSerializationProtocol>

@property (retain, nonatomic) NSDecimalNumber *pts;
@property (retain, nonatomic) NSDecimalNumber *startTime;
@property (retain, nonatomic) NSDecimalNumber *endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accs_excludeKeys;
+ (id)accs_acceptClasses;

- (void).cxx_destruct;

@end
