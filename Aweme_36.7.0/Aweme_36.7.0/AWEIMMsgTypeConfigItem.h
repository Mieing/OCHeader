@class NSSet;

@interface AWEIMMsgTypeConfigItem : NSObject

@property (nonatomic) long long msgType;
@property (retain, nonatomic) NSSet *aweTypeList;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
