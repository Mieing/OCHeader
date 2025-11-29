@class NSData;

@interface GCDWebServerDataResponse : GCDWebServerResponse {
    NSData *_data;
    BOOL _done;
}

+ (id)responseWithText:(id)a0;
+ (id)responseWithHTML:(id)a0;
+ (id)responseWithHTMLTemplate:(id)a0 variables:(id)a1;
+ (id)responseWithJSONObject:(id)a0;
+ (id)responseWithJSONObject:(id)a0 contentType:(id)a1;
+ (id)responseWithData:(id)a0 contentType:(id)a1;

- (id)initWithText:(id)a0;
- (id)initWithHTML:(id)a0;
- (id)initWithHTMLTemplate:(id)a0 variables:(id)a1;
- (id)initWithJSONObject:(id)a0;
- (id)initWithJSONObject:(id)a0 contentType:(id)a1;
- (id)initWithData:(id)a0 contentType:(id)a1;
- (id)readData:(id *)a0;
- (id)description;
- (void).cxx_destruct;

@end
