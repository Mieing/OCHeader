@class NSArray;

@interface QMapStyleData : NSObject

@property (readonly, nonatomic) BOOL mapStyleEnabled;
@property (readonly, copy, nonatomic) NSArray *styleList;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;

@end
