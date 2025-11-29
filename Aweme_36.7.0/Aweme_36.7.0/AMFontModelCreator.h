@class UIFont;

@interface AMFontModelCreator : NSObject {
    double _fontSize;
    long long _dataSize;
    char *_data;
    struct CGContext { } *_context;
    long long _version;
}

@property (retain, nonatomic) UIFont *font;

- (char *)fontModelForChar:(unsigned short)a0 fontsize:(unsigned int)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)createContext;
- (void)reset;
- (void)dealloc;

@end
