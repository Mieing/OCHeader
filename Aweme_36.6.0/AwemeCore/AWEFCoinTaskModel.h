@class AWEFCoinTaskExtra, AWEFCoinTaskData, NSString;

@interface AWEFCoinTaskModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEFCoinTaskData *taskData;
@property (retain, nonatomic) AWEFCoinTaskExtra *taskExtra;
@property (nonatomic) long long statusCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
