@class NSString, NSSet, NSNumber;

@interface AWEPzComponentRecordModel : NSObject

@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *componentType;
@property (copy, nonatomic) NSSet *cTags;
@property (copy, nonatomic) NSSet *sTags;
@property (copy, nonatomic) NSNumber *recordID;

- (id)initWithComponentID:(id)a0 componentType:(id)a1 cTags:(id)a2 sTags:(id)a3 recordID:(id)a4;
- (void).cxx_destruct;

@end
