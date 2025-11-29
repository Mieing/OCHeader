@class BDPUniqueID;

@interface BDPToolbarContext : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long themeStyle;
@property (nonatomic) BOOL isXScreen;
@property (nonatomic) unsigned long long viewType;

- (void).cxx_destruct;

@end
