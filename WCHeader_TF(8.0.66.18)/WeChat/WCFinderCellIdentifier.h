@class NSString, NSIndexPath, NSObject;

@interface WCFinderCellIdentifier : NSObject {
    long long hashValue;
}

@property (nonatomic) unsigned long long duplicateIdx;
@property (retain, nonatomic) id object;
@property (retain, nonatomic) NSString *section;
@property (nonatomic) unsigned long long secHash;
@property (retain, nonatomic) NSString *item;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) long long extField1;
@property (retain, nonatomic) NSObject *extField2;

+ (id)identifierForObject:(id)a0;
+ (id)createIdentifierForObject:(id)a0 setter:(id /* block */)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;

@end
