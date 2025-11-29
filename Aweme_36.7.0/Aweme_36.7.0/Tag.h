@class NSString;

@interface Tag : NSObject

@property (nonatomic) long long tagId;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) long long createdAtUtc;
@property (nonatomic) long long modifiedAtUtc;
@property (nonatomic) BOOL isDeleted;

- (id)initWithTagId:(long long)a0 displayName:(id)a1 createdAtUtc:(long long)a2 modifiedAtUtc:(long long)a3 isDeleted:(BOOL)a4;
- (void).cxx_destruct;

@end
