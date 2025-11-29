@class IESLiveNewDressContext;

@interface IESLiveNewDressErrorFactory : NSObject

@property (retain, nonatomic) IESLiveNewDressContext *context;

- (id)createErrorWithDomain:(id)a0 code:(long long)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
