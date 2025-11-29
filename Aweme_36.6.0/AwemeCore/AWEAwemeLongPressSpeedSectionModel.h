@class NSArray, NSString;

@interface AWEAwemeLongPressSpeedSectionModel : NSObject <AWEListDiffable>

@property (copy) NSArray *models;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifierKey;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
