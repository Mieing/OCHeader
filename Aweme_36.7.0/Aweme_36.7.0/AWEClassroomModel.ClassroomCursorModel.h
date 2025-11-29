@class NSString;

@interface AWEClassroomModel.ClassroomCursorModel : MTLModel <MTLJSONSerializing> {
    void /* function */ cursor;
}

@property (nonatomic, copy) NSString *cursor;
@property (nonatomic) BOOL hasMore;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
