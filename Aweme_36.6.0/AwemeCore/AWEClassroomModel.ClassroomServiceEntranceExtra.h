@class NSArray;

@interface AWEClassroomModel.ClassroomServiceEntranceExtra : MTLModel <MTLJSONSerializing> {
    void /* function */ joinableGroupIdList;
}

@property (nonatomic, copy) NSArray *joinableGroupIdList;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
