@class NSString;

@interface AnnieXSSPPreconnectItem : NSObject <AnnieXSSPPreconnectItemProtocol>

@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *protocol;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *custom;
@property (nonatomic) long long importance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
